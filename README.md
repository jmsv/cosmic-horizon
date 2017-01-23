## Development requirements

We're not completely sure what we're using at the moment, but it will likely end up being [Qt Open Source](https://www.qt.io/download-open-source/).

### Qt Installation

#### Windows

1. Download the online installer from [www.qt.io/download-open-source](https://www.qt.io/download-open-source/)
2. Run it with all default settings

#### Linux (Ubuntu)

1. Download the `.run` file from [www.qt.io/download-open-source](https://www.qt.io/download-open-source/)
2. In a terminal, navigate to the download directory (try running `cd ~/Downloads/`)
3. Run `chmod +x filename.run` where filename is `qt-unified-linux-...` or whatever. This makes the file executable
4. Run `./filename.run`, to run the installer. Click through the default settings

## Friendly Advice

1. When writing C++, if you need to use a `goto`, *don't*. This may sound cryptic now, but might soon make sense.
