uname -a
echo ""

cd math/
make --silent clean
make --silent
echo "NO REG"
./dhrystone
echo "REG"
./dhrystone-reg
./whetstone
./test_ops.sh
./test_math.sh
make --silent clean

cd ../sorts/
make --silent clean
make --silent
./test_sorts.sh
make --silent clean

cd ../io/
make --silent clean
make --silent
./test_io.sh
make --silent clean

cd ..
