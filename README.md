# tools_and_tips_for_coding
Tools, tips, and reminders for coding

# General tools and tips for coding

## 1. CMake (c++)
### How to structure your project
- [An Introduction to Modern CMake](https://cliutils.gitlab.io/modern-cmake/chapters/basics/structure.html)

### CMake procedure
- [Official Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
1. [CMake installation](https://cgold.readthedocs.io/en/latest/first-step/installation.html)
2. make your workspace and src folders
3. in src folder, configure ***CMakeList.txt*** file
  - [Detailed](https://gitlab.kitware.com/cmake/community/-/wikis/FAQ)
  - [Minimal example](https://cgold.readthedocs.io/en/latest/first-step/minimal-example.html)
4. run ```cmake .``` with folder specifications or ```cmake-gui```
  - TODO: How to configure CMakeList.txt for automatic folder specification?
    - A work-around: 1) go to build folder 2) ```cmake ../src``` there.
5. make binary excutable: ```make excutable_name```
6. run: ```./excutable_name```

### Cf: [catkin_tools](https://catkin-tools.readthedocs.io/en/latest/#)

## 2. Github tips
### Git ReadMe format
- [Markdown-Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)


## 3. Useful tools
### 1) text editor
- [Atom](https://atom.io/)
  - Nice for github ReadMe edit/preview in addition to general editing
  - Good github-compatibility (built-in plug-in)
  - Installation
    - Step 1::Add repo: ```sudo add-apt-repository ppa:webupd8team/atom```
    - Step 2::Update repo: ```sudo apt-get update```
    - Step 3::Install: ```sudo apt-get install atom```

### 2) automatic documentation tool
- [Doxygen](http://www.doxygen.nl/manual/docblocks.html)


### 3) string management samples
- [Sample codes](stringManagement)
