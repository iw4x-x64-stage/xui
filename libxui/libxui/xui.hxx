#pragma once

#include <iosfwd>
#include <string>

#include <libxui/export.hxx>

namespace xui
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBXUI_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
