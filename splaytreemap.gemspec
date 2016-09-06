# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'splaytreemap/version'

Gem::Specification.new do |spec|
  spec.name          = "splaytreemap"
  spec.version       = Splaytreemap::VERSION
  spec.authors       = ["Kirk Haines"]
  spec.email         = ["wyhaines@gmail.com"]

  spec.summary       = %q{An implementation of Splay Tree, with a size limitation feature, offering a Map style API. Very useful for caches.}
  spec.description   = %q{A Splay Tree is a self adjusting binary search tree with the additional property that recently accessed elements are quick to access again. This makes it useful for caches because the most commonly accessed elements will be the fastest ones to access. This tree has an additional feature that allows it's maximum size to be restricted. When it exceeds it's maximum size, it will drop all of the nodes which are at the terminal ends of the tree structure, leaving the more commonly accessed nodes intact. This implementation is written in C++ with a Ruby wrapper.}
  spec.homepage      = "http://github.com/wyhaines/splaytreemap"
  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0").reject { |f| f.match(%r{^(test|spec|features)/}) }
  spec.bindir        = "exe"
  spec.require_paths = ["lib"]
  spec.executables   = spec.files.grep(%r{^exe/}) { |f| File.basename(f) }
  spec.extensions = %w[ext/splaytreemap/extconf.rb]

  spec.add_development_dependency "bundler", "~> 1.12"
  spec.add_development_dependency "rake", "~> 10.0"
  spec.add_development_dependency "minitest", "~> 5.0"
  spec.add_development_dependency "rake-compiler", "~> 0"
end
