# subimage

Minimal and pretty dumb command line tool to find the location of an image within a larger image.

## Build

### 1. Installing Dependencies

#### Linux

Compiler:

```sh
apt-get install cmake g++ gdb
```

OpenCV:

```sh
apt-get install git libavcodec-dev libavformat-dev libgtk2.0-dev libswscale-dev pkg-config
cd ~/
git clone https://github.com/opencv/opencv.git
cd opencv
mkdir release
cd release
cmake -DCMAKE_BUILD_TYPE=RELEASE -DCMAKE_INSTALL_PREFIX=/usr/local ..
make
make install
```

#### macOS

Compiler:

```sh
brew install cmake
```

OpenCV:

```sh
brew install opencv3 --with-ffmpeg
brew link opencv3 --force
```

#### Windows

Compiler: 

[cmake-3.9.0-win64-x64](https://cmake.org/files/v3.9/cmake-3.9.0-win64-x64.msi)

OpenCV:

[opencv-3.2.0-vc14](https://sourceforge.net/projects/opencvlibrary/files/opencv-win/3.2.0/opencv-3.2.0-vc14.exe/download)
    
### 2. Build

`cd build`

`cmake ../`

`make`

### 3. Run

`./subimage ../data/large.png ../data/small.png`

## License

MIT License

Copyright (c) 2018 Agustín Rodríguez

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
