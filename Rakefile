# -*- ruby -*-

require "rubygems"
require "hoe"
require 'rake/extensiontask'

# Hoe.plugin :compiler
# Hoe.plugin :gem_prelude_sucks
# Hoe.plugin :inline
# Hoe.plugin :minitest
# Hoe.plugin :racc
# Hoe.plugin :rcov
# Hoe.plugin :rdoc

Hoe.spec "rustsea" do
  developer("th3james", "th3james@fastmail.fm")

  self.extra_dev_deps << ['rake-compiler', '>= 0']
  self.spec_extras = { extensions: ["ext/rustsea/extconf.rb"] }

  Rake::ExtensionTask.new('rustsea', spec) do |ext|
    ext.lib_dir = File.join('lib', 'rustsea')
  end
end

Rake::Task[:test].prerequisites << :compile
# vim: syntax=ruby
