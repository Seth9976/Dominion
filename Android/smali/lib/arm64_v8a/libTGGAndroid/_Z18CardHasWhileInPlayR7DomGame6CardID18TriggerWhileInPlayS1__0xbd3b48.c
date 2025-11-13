// 函数: _Z18CardHasWhileInPlayR7DomGame6CardID18TriggerWhileInPlayS1_
// 地址: 0xbd3b48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = 0
int32_t* x9_2 = *(arg1 + mulu.dp.d(arg2, 0x68) + 0x1a68) + 0xec

while (true)
    int32_t x10_1 = x9_2[-3]
    
    if (x10_1 != 6)
        if (x10_1 == 0)
            return 0xffffffff
    else if (x9_2[-2] == 1 && *x9_2 == arg3)
        return (((0x3ffff & zx.q((arg4 & 0xfff) << 6)) | zx.q((0x3fff & arg2) << 0x12))
            & 0xfffffff0) | (zx.q(x8) & 0xf) | 0x10
    
    x8 += 1
    x9_2 = &x9_2[0x30]
