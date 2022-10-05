import wifi_qrcode_generator as qr

name = input('Your wifi name: ')
password = input('Your wifi password: ')
# Use wifi_qrcode() to create a QR image
qrCode = qr.wifi_qrcode(name, False, 'WPA', password)

# Display the qrImage
qrCode.show()