# libxui - Menu interface for IW4x.

The `libxui` C++ library contains the IW4x menu interface.

## Usage

To start using `libxui` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libxui ^0.1.0
```

Then import the library in your `buildfile`:

```
import libs = libxui%lib{xui}
```
