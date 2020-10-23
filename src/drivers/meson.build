skeleton_drivers_include = include_directories('.')
	# This style of include means that you include nested folders like this:
	# #include <driver_template/driver_template.hpp>

skeleton_drivers_dep = declare_dependency(
	include_directories: skeleton_drivers_include,
	sources: [
		files('driver_template/driver_template.cpp'),
	],
)
