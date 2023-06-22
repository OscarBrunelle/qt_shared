# Set C++ standard
CONFIG += c++17

# Determine build type and set target name
debug_or_release = debug
CONFIG(release, debug|release) {
	debug_or_release = release
}

# Add "d" suffix to target name for debug builds
equals(debug_or_release, debug) {
	TARGET = $${TARGET}d
}
