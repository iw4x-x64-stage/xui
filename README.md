# xui - Menu interface for IW4x.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libxui` in your `build2`-based project, then instead see the accompanying
package [`README.md`](libxui/README.md) file.

## Development

The development setup for `xui` uses the standard `bdep`-based workflow.
On Linux we build with GCC. For example:

```
git clone https://github.com/iw4x/xui.git
cd xui

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```

On Windows we build with MSVC from the x64 Native Tools Command Prompt or
the matching PowerShell, which builds 64-bit binaries. For example:

```
git clone https://github.com/iw4x/xui.git
cd xui

bdep init -C -@msvc cc config.cxx=cl
bdep update
bdep test
```

## Contributing

See [CONTRIBUTING](.github/CONTRIBUTING.md).

## License

`xui` is licensed under the GNU General Public License, version 3, subject
to the additional permissions described in version 1.1 of the IW4x Linking
Exception.

See [LICENSE](LICENSE.md), [LICENSE-EXCEPTION](LICENSE-EXCEPTION.md), and
[AUTHORS](AUTHORS).
