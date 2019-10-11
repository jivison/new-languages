# Arrays
# Arrays can be declared in two ways:
# One with the @ sign
@cool_array = (1, 2, 3, 4);

# But also with the qw operator:
@cooler_array = qw/This is an array/;
# This will create an array out of the passed items delineated by whitespace

# How to access a specific array element
print $cooler_array[0];

# Indeces start at 0, and can be negative

# Shortcuts:
@ten_numbers = (1..10);
@letters = (a..z);

@array = (1, 2, 3);
$array[50] = 4;
$size = $array; # => 51
$max_index = $#array; # => 50

# Array mutations
@coins = ("Nickel", "Quarter", "Dime");

push(@coins, "Penny"); # Pushed one to the end
unshift(@coins, "Loonie"); # Pushes one to the beginning
pop(@coins); # Removes an element from the end
shift(@coins); # Removes an element from the beginning

# You can also slice an array
@days = qw/Mon Tue Wed Thu Fri Sat Sun/;

@weekdays = @days[3..5];

# Splicing an array
@nums = (1..20);

# This will from the fifth index take the first five elements and replace them with 21..25
splice(@nums, 5, 5, 21..25);

# Splitting string
$my_favourite_things = "Rain-Drops-On-Roses-And-Whiskers-On-Kittens";
@my_favourite_things_array = split('-', $my_favourite_things);

# Joining an array
$string_again = join(" ", @my_favourite_things_array);

@foods = qw(pizza steak chicken burgers);
@foods = sort(@foods); # => burgers chicken pizza steak 

# The $[ special variable
# This variable holds where arrays start

# I have decreed, that arrays start at one 
$[ = 1;

# Let's put that back
$[ = 0;

@odd = (1, 3, 5);
@even = (2, 4, 6);

@numbers = (@odd, @even)
@numbers # => 1 3 5 2 4 6
$numbers[1] # => 3
@numbers[0..3] # => 1 3 5