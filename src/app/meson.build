blinky_example = executable('blinky_example',
	files('main.cpp'),
	dependencies: [
		# TODO: hook up dependency
		# nucleo_l4r5zi_demo_platform_dep,
	],
	install: false,
	link_args: host_map_file.format(meson.current_build_dir() / 'blinky_example'),
	build_by_default: meson.is_subproject() == false
)

#############################
# Output Conversion Targets #
#############################

blinky_hex = custom_target('blinky_example.hex',
	input: blinky_example,
	output: 'blinky_example.hex',
	command: host_hex_conversion,
	build_by_default: meson.is_subproject() == false
)

blinky_hex = custom_target('blinky_example.bin',
	input: blinky_example,
	output: 'blinky_example.bin',
	command: host_bin_conversion,
	build_by_default: meson.is_subproject() == false
)

