# Hexafonter

A command-line tool that convert a PNG file like this:

![(sample font image)](./sample-font.png)

to a C file with a sideways preview and a character code legend,
.

Sample result (see [`sample-output.c`](./sample-output.c) for the full thing):

```plain
////////////////////////////////////
  0x3E, 0x41, 0x5D, // [🬦🬡🬰🬧] \x40 @
  0x49, 0x2E, 0x00, // [🬁🬃🬌🬅]
  0x7E, 0x09, 0x09, // [🬁🬂🬕🬧] \x41 A
  0x09, 0x7E, 0x00, // [🬇🬋🬌🬅]
  0x7F, 0x49, 0x49, // [▐🬂🬕🬨] \x42 B
  0x49, 0x36, 0x00, // [🬁🬋🬈🬅]
  0x3E, 0x41, 0x41, // [🬦🬂🬂🬧] \x43 C
  0x41, 0x22, 0x00, // [🬁🬃 🬅]
  0x7F, 0x41, 0x41, // [▐🬂🬂🬨] \x44 D
  0x41, 0x3E, 0x00, // [🬁🬋🬋🬅]
  0x7F, 0x49, 0x49, // [▐🬂🬕🬨] \x45 E
  0x41, 0x41, 0x00, // [🬉  🬉]
  0x7F, 0x09, 0x09, // [🬁🬂🬕🬨] \x46 F
  0x01, 0x01, 0x00, // [   🬉]
```


## Installation

You need Python 3.6+ and the [`png` module](https://pypng.readthedocs.io/en/latest/index.html).

In a Python virtual environent, you can install the tool as:

    python -m pip install hexafonter


## Usage

To convert a PNG to a C font file:

    python -m hexafonter font.png > output-font.c

By default, the tool expects characters to be 8 pixels tall 6 pixels wide.
The height is hard-coded, but you can change the width by adding a number:

    python -m hexafonter arcade-font.png 8 > output-font.c

Several options:

* `-p preamble-file`: Use a custom preamble (`#include` and variable
  declaration)
* `-p -`: Use *no* preamble (useful if you prepend it some other way)
* `-o outfile.c`: Output to the given file, rather than stdout (i.e. don't
  combine this with the `> outfile` part shown above)
* `-r`: Reverse mode -- convert a C file to a PNG instead.
  (May not work with files generated by other tools.
  Details not present in the C file will be lost.
  On the other hand, the resulting PNG will be relatively small.)
* `-h`: Get help


## Details of operation

The tool looks at the *red* channel of each pixel and does a very basic
treshold operation. That means:

- Don't use (semi-)transparent images.
  (The tool does not “see” what you see in the transparent regions.)
- Green, cyan, blue, and all dark colors are treated as black (on).
- Red, yellow, magenta, and all light colors are treated as white (off).


## License

The tool is provided under the MIT license. May it serve you well.
