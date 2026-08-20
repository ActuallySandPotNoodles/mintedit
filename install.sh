#!/bin/bash
if [[ $EUID -ne 0 ]]; then
   echo "This script must be run as root"
   exit 1
fi
$ARCH = $(uname -m)
echo "Starting Install Of 'MintEdit'..."
echo "Downloading Stuff..."
mkdir -p /usr/share/sandpotnoodles
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/mintedit/refs/heads/main/mintedit.png -O /usr/share/sandpotnoodles/mintedit.png
wget https://raw.githubusercontent.com/ActuallySandPotNoodles/mintedit/refs/heads/main/mintedit.desktop -O /usr/share/applications/mintedit.desktop
if [[ "$(uname -m)" == "x86_64" ]]; then
wget https://github.com/ActuallySandPotNoodles/mintedit/releases/download/1.0.0/mintedit_x86_64 -O /usr/bin/mintedit
fi
if [[ "$(uname -m)" == "aarch64" ]]; then
wget https://github.com/ActuallySandPotNoodles/mintedit/releases/download/1.0.0/mintedit_aarch64 -O /usr/bin/mintedit
fi
chmod 775 /usr/bin/mintedit
echo "Install Complete!"
