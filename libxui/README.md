# libxui - A C++ library

The `libxui` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libxui` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libxui ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libxui%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libxui.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
