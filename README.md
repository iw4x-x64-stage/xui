# xui - <SUMMARY>

`xui` is a <SUMMARY-OF-FUNCTIONALITY>.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`xui` in your `build2`-based project, then instead see the accompanying
package [`README.md`](<PACKAGE>/README.md) file.

The development setup for `xui` uses the standard `bdep`-based workflow.
For example:

```
git clone .../xui.git
cd xui

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
