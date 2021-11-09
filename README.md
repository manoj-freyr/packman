# packman
Tool to validate installation using a package lookup file for Linux OSes.

## building:
```
git clone https://github.com/manoj-freyr/packman.git
cd packman
mkdir build; cd build
cmake ..
make
```
a test file is included in repo: package-list.txt

put appropriate location of file in driver.cpp and build code.

## run:
./packman
```

  OS installed is : Ubuntu
  4 packages to validate
  Error: version mismatch for package hip-base expected version: 4.3.21323.607.40402-41 but installed 4.3.21323.6070.40402-41
  dpkg-query: package 'hipper-base' is not installed and no information is available
  Use dpkg --info (= dpkg-deb --info) to examine archive files,
  and dpkg --contents (= dpkg-deb --contents) to list their contents.
  error in parsing
  Error: package hipper-base not installed
  Package rock-dkms-firmware installed version is 1:4.4-41
  Package rocminfo installed version is 1.0.0.40402-41
  RCQT complete :
          Total Packages to validate    : 4
          Valid Packages                : 2
          Missing Packages              : 1
          Packages version mismatch     : 1
```

