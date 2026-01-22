#include "modules.h"

#include <pybind11/pytypes.h>

void bind_hidden_builtins_module(py::module &&m) {
  py::dict readonly_dict{};

  auto mappingproxy_t = py::object types =
      py::module::import("types").attr("MappingProxyType");

  m.attr("mapping_proxy") = mappingproxy_t(readonly_dict);
}
