// 函数: sub_106c134
// 地址: 0x106c134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char buf
uint32_t buf_1

if (read(*(arg1 + 0xc0), &buf, 1) != 1)
    __android_log_print(6, "TGLOG", "No data on command pipe!")
    buf_1 = 0xff
else
    buf_1 = zx.d(buf)
    
    if (buf_1 == 0xc)
        pthread_mutex_lock(arg1 + 0x68)
        int64_t x0_3 = *(arg1 + 0x28)
        
        if (x0_3 != 0)
            free(x0_3)
            *(arg1 + 0x28) = 0
            *(arg1 + 0x30) = 0
        
        pthread_mutex_unlock(arg1 + 0x68)
        buf_1 = 0xc

android_app_pre_exec_cmd(arg1, zx.q(buf_1))
int64_t x8 = *(arg1 + 8)

if (x8 != 0)
    x8(arg1, zx.q(sx.d(buf_1.b)))

return android_app_post_exec_cmd(arg1, zx.q(buf_1)) __tailcall
