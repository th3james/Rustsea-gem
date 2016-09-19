gem "minitest"
require "minitest/autorun"
require "rustsea"

class TestRustsea < Minitest::Test
  def test_hello_world
    assert_equal("Hello World", Rustsea.hello_world)
  end
end
