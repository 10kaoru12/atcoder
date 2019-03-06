cd ABC
for((i=1;i<=120;i++))
do
    cd $i
    if [ i < 10 ]; then
        cd a
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc00$i/tasks/abc00""$i""_1"
        fi
        cd ..
        cd b
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc00$i/tasks/abc00""$i""_2"
        fi
        cd ..
    fi
    if [ i < 20 ]; then
        cd a
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc0$i/tasks/abc0""$i""_a"
        fi
        cd ..
        cd b
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc0$i/tasks/abc0""$i""_b"
        fi
        cd ..
    fi
    if [ i < 100 ]; then
        cd a
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc$i/tasks/abc""$i""_a"
        fi
        cd ..
        cd b
        if [ ! -f test ]; then
            oj dl "https://atcoder.jp/contests/abc$i/tasks/abc""$i""_b"
        fi
        cd ..
    fi
    cd ..
done