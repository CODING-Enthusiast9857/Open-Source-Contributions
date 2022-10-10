import cv2
import numpy as np
import mediapipe as mp
from PIL import Image

out_name = 'output'

mp_drawing = mp.solutions.drawing_utils
mp_pose = mp.solutions.pose

mp_drawing.DrawingSpec(thickness=1, circle_radius=1)

# enter the name of video 
cap = cv2.VideoCapture('Media_Raw2.mp4') # change the name of video here

if (cap.isOpened() == False): 
  print("Unable to read camera feed")


frame_width = int(cap.get(3))
frame_height = int(cap.get(4))

out = cv2.VideoWriter(f'{out_name}.avi',cv2.VideoWriter_fourcc('M','J','P','G'), 30, (frame_width,frame_height))

with mp_pose.Pose(
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5) as pose:

  while cap.isOpened():
    success, image = cap.read()

    if not success:
      print("Ignoring empty camera frame.")
      # If loading a video, use 'break' instead of 'continue'.
      continue

    image.flags.writeable = False
    results = pose.process(image)

    image.flags.writeable = True

    imgg = np.zeros((frame_height,frame_width,3), np.uint8)

    mp_drawing.draw_landmarks(imgg, results.pose_landmarks, mp_pose.POSE_CONNECTIONS)

    out.write(imgg)

      # Display the resulting frame    
    cv2.imshow('frame',image)
    cv2.imshow('frame1', imgg)

      # Press Q on keyboard to stop recording
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

    # # Break the loop
    # else:
    #   break  

  # When everything done, release the video capture and video write objects
cap.release()
out.release()

  # Closes all the frames
cv2.destroyAllWindows()