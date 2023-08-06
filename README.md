# ILOVEYUUKA Trojan
A joke trojan made in C++ for the Win32 platform. Tested on Windows 10.

# Payloads
Upon running the program, the following payloads executes in order:
* Replaces background images with sunflower
* Adds 512 copies of ILOVEYUUKA text files all with a friendly message contained within them.
* Opens random Windows programs
* Opens the web browser to the Steam store page for CBT with Yuuka
* Takes ownership of System32 and deletes it
* Overwites master boot record
* Ejects C:\ drive
* Blue screens

# Notes
* The process hollower named "hollower" should be the main program that runs first (i.e., all other files like the loader and DLLs should be bundled with the hollower). The loader and DLLs can be ran separately but are not designed to.
* The release build of the program is protected with Themida v3.1.4.0 x32. If you do not have Themida or you wish to use a custom packer, ensure that lAiaUFyKHYphOZsGSMZv.dll, klzfNjYkTazNJpKNvBkL.dll, and ILOVEYUUKA.dll gets extracted to %LOCALAPPDATA% upon running the program.
* The hollower uses the Themida SDK as well as several VM protection macros. Delete these if you do not have Themida.
* The system32 payload occurs too slowly; this feature does not work as intended as of the current build.
* The program does not have any checks as to whether or not the program is being ran under a VM (except for Themida's packer, which allows this program to run under a VM). I advise you to not run this program under a real machine, or at least a machine you care about.
