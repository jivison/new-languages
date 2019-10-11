# You can do multiline blocks in quotes really easily:
$var = <<"EOF";
This is the syntax for a multiline block of text
In this case, everything between the 'here' operator (<<)
And an EO(F) will be interpolated into the double quotes
This works with single quotes to
EOF


"Double quotes render $var\s and \ns";
'Single quotes do not \n\n do that';

$some_text = "A scalar variable is declared with a '\$'. It can contain a string, number, etc";

@an_array = ("I am", "an array", "as a list!");
$array_element = "Certain elements are accessed as scalars, like this: $an_array[0]";

# These are both valid. The fat comma (=>) is an alias for an actual comment
# Perl knows when its a hash or an array based on the identifier
%hash = ('Key', "value");
%also_hash = ("key" => "value");
$hash_element = "Hash elements are accessed like this: $hash{'Key'}";

# A key concept in Perl is context
@array = (1, 2, 3, 4);

@copy = @array; # => (1, 2, 3, 4)
$size = @array; # => 3

# Scalar operators
$str = "hello" . "world"; # => "helloworld"
$num = 5 + 10;
$mul = 4 * 5;
$mix = $str . $num;

# Multiline strings are easy
$comment = '
I am


a multiline
                                    string';

# V-string
# V-strings are shorthand for interpolation with 'specified ordinals'
$smile = v9786; # => ☺
$foo = v102.111.11; # => 'foo'

print "$smile\n";

