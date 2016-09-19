require 'mkmf'

RUST_LIB_PATH = File.expand_path(File.join(
  File.dirname(File.dirname(__FILE__)), '..', 'rust', 'target', 'debug'
))
dir_config('rust', [], [RUST_LIB_PATH])
have_library('rust')

create_makefile('rustsea/rustsea')
