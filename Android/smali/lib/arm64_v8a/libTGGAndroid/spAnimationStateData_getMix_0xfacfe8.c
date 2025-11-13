// 函数: spAnimationStateData_getMix
// 地址: 0xfacfe8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = *(arg1 + 0x10)
int128_t result

if (i != 0)
    do
        if (*i == arg2)
            for (int64_t* j = i[1]; j != 0; j = j[2])
                if (*j == arg3)
                    result.d = j[1].d
                    return result
        
        i = i[2]
    while (i != 0)

result.d = *(arg1 + 8)
return result
