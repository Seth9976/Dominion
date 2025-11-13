// 函数: Java_com_TGActivity_MyFirebaseMessagingService_jniNotification
// 地址: 0x106ac30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25

x25 = arg7 s< 8 ? arg7 : 8

char* var_e0[0x8]
char* var_a0[0x8]

if (arg7 s>= 1)
    int64_t x26_1 = 0
    uint64_t fp_1
    
    if (x25 s> 1)
        fp_1 = zx.q(x25)
    else
        fp_1 = 1
    
    do
        int64_t x0_1 = (*(*arg1 + 0x568))(arg1, arg5, zx.q(x26_1.d))
        int64_t x0_3 = (*(*arg1 + 0x568))(arg1, arg6, zx.q(x26_1.d))
        var_a0[x26_1] = (*(*arg1 + 0x548))(arg1, x0_1, 0)
        x26_1 += 1
        var_e0[x26_1] = (*(*arg1 + 0x548))(arg1, x0_3, 0)
    while (fp_1 != x26_1)

char* x0_9 = (*(*arg1 + 0x548))(arg1, arg3, 0)
char* x0_11 = (*(*arg1 + 0x548))(arg1, arg4, 0)
NotificationsAdd(x0_9, x0_11, &var_a0, &var_e0, x25)

if (arg7 s>= 1)
    int64_t x24_1 = 0
    uint64_t x21_1
    
    if (x25 s> 1)
        x21_1 = zx.q(x25)
    else
        x21_1 = 1
    
    do
        int64_t x0_14 = (*(*arg1 + 0x568))(arg1, arg5, zx.q(x24_1.d))
        int64_t x0_16 = (*(*arg1 + 0x568))(arg1, arg6, zx.q(x24_1.d))
        (*(*arg1 + 0x550))(arg1, x0_14, var_a0[x24_1])
        (*(*arg1 + 0x550))(arg1, x0_16, var_e0[x24_1])
        x24_1 += 1
    while (x21_1 != x24_1)

(*(*arg1 + 0x550))(arg1, arg3, x0_9)
return (*(*arg1 + 0x550))(arg1, arg4, x0_11)
