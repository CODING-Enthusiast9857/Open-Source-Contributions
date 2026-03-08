import pygame
import random

ROWS = 6
COLS = 7
CELL_SIZE = 90
BOARD_WIDTH = COLS * CELL_SIZE
BOARD_HEIGHT = ROWS * CELL_SIZE
PLAYER_ONE_COLOR = "RED"
PLAYER_TWO_COLOR = "YELLOW"
PLAYER_ONE_NAME = "Buddy"
PLAYER_TWO_NAME = "Snoop"

class Connect_Four():
    def __init__(self):
        self.balls_num = 15
        self.balls = []
        self.board = []
        self.players = [Player(PLAYER_ONE_NAME, PLAYER_ONE_COLOR), Player(PLAYER_TWO_NAME, PLAYER_TWO_COLOR)]
        self.current_player = random.randint(0, 1)

        pygame.init()

        screen = pygame.display.set_mode((BOARD_WIDTH, BOARD_HEIGHT))
        
        clock = pygame.time.Clock()
        self.board = self.initialize_board()

        while True:
            events = pygame.event.get()
            for event in events:
                if event.type == pygame.QUIT:
                    return
                if event.type == pygame.MOUSEBUTTONUP:
                    pos_x, _ = pygame.mouse.get_pos()

                    closest_col = pos_x // CELL_SIZE
                    changed_board, row, col = self.change_board_state(closest_col, self.current_player)
                    if changed_board:
                        if self.check_winner(row, col): #current player won
                            print(f"Player {self.players[self.current_player].get_name()} won!!")
                            return
                        self.change_turn()

            self.draw_board(screen)
            self.draw_balls(screen)

            pygame.display.flip()

            clock.tick(60)

    def initialize_board(self):
        return [[-1 for _ in range(COLS)] for _ in range(ROWS)]
    
    def draw_board(self, screen):
        pygame.draw.rect(screen, (0, 0, 255), (0, 0, BOARD_WIDTH, BOARD_HEIGHT))

        for row in range(ROWS):
            for col in range(COLS):

                x = col * CELL_SIZE + CELL_SIZE // 2
                y = row * CELL_SIZE + CELL_SIZE // 2

                pygame.draw.circle(screen, (240, 240, 240), (x, y), CELL_SIZE // 2 - 5)
    
    def change_board_state(self, col, player_num):
        for row in reversed(range(ROWS)):
            if self.board[row][col] == -1:
                self.board[row][col] = player_num
                return True, row, col

        return False, None, None
    
    def draw_balls(self, screen):
        for row in range(ROWS):
            for col in range(COLS):
                cell_value = self.board[row][col]
                if cell_value == 0 or cell_value == 1:
                    x = col * CELL_SIZE + CELL_SIZE // 2
                    y = row * CELL_SIZE + CELL_SIZE // 2

                    pygame.draw.circle(screen, self.players[cell_value].get_color(), (x, y), CELL_SIZE // 2 - 5)

    def change_turn(self):
        self.current_player = (self.current_player + 1) % 2

    def check_winner(self, changed_row, changed_col):
        directions = [
            (1, 0),
            (0, 1),
            (1, 1),
            (1, -1)
        ]

        for direction_row, direction_col in directions:
            count = 1

            row, col = changed_row + direction_row, changed_col + direction_col
            while 0 <= row < ROWS and 0 <= col < COLS and self.board[row][col] == self.current_player:
                count += 1
                row += direction_row
                col += direction_col

            row, col = changed_row - direction_row, changed_col - direction_col
            while 0 <= row < ROWS and 0 <= col < COLS and self.board[row][col] == self.current_player:
                count += 1
                row -= direction_row
                col -= direction_col

            if count >= 4:
                return True

        return False

class Player:
    def __init__(self, name, color):
        self._name = name
        self._color = color
    
    def get_color(self):
        return self._color
    
    def get_name(self):
        return self._name

if __name__ == '__main__':
    Connect_Four()