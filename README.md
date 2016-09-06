# Splaytreemap

A Splay Tree is a self adjusting binary search tree with the additional property that recently accessed elements are faster to access than less recently accessed elements. This makes them quite useful for the implementation of caches.

This particular implementation also implements a twist to the Splay Tree such that if it is given a maximum size, once it's element count exceeds that maximum size, it will purge all elemements which are stored in nodes at the terminal ends of the data structure. This should generally result in a bit more than half of the nodes being purged, though the exact number will depend on how the tree is balanced at the time, which is in turn affected by which nodes have been accessed recently.

This implementation is written in C++, with a Ruby interface that seeks to provide a Hash-like API. This data structure has been in my toolbox for a long time, but it can almost certainly use some improvement of the API to be even more transparently Hash-like.

The current implementation has a limitation that the key for the splay tree map has to be a String value.

## Installation

Add this line to your application's Gemfile:

```ruby
gem 'splaytreemap'
```

And then execute:

    $ bundle

Or install it yourself as:

    $ gem install splaytreemap

## Usage

```ruby
require 'splaytreemap'

s = Splaytreemap.new

s.max_size = 1000

s['this'] = 'that'

## Development

After checking out the repo, run `bin/setup` to install dependencies. Then, run `rake test` to run the tests. You can also run `bin/console` for an interactive prompt that will allow you to experiment.

To install this gem onto your local machine, run `bundle exec rake install`. To release a new version, update the version number in `version.rb`, and then run `bundle exec rake release`, which will create a git tag for the version, push git commits and tags, and push the `.gem` file to [rubygems.org](https://rubygems.org).

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/[USERNAME]/splaytreemap. This project is intended to be a safe, welcoming space for collaboration, and contributors are expected to adhere to the [Contributor Covenant](http://contributor-covenant.org) code of conduct.


## License

The gem is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).

