// 函数: sub_1102500
// 地址: 0x1102500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_c8
int64_t var_90
char* result = sub_1102604(&data_24bc060, arg1, &var_90, &var_c8)

if (result != 0)
    return result

int64_t x22_1 = var_90
pthread_rwlock_wrlock(0x24bc064)
void* x8_1 = data_11c1ad0
void* x9_1 = data_11c1ad8

if (x8_1 u>= x9_1)
    void* x19_1 = data_11c1ac8
    void* x21_1 = x9_1 - x19_1
    void* x0_1 = malloc(x21_1 << 2)
    memcpy(x0_1, x19_1, x21_1)
    
    if (x19_1 != &data_24bc0a0)
        free(x19_1)
    
    data_11c1ac8 = x0_1
    x8_1 = x0_1 + (x21_1 s>> 5 << 5)
    data_11c1ad8 = x0_1 + (x21_1 s>> 3 << 5)

*x8_1 = x22_1
int64_t var_78
*(x8_1 + 8) = var_78
int64_t var_70
*(x8_1 + 0x10) = var_70
*(x8_1 + 0x18) = x22_1
data_11c1ad0 = x8_1 + 0x20
return pthread_rwlock_unlock(0x24bc064)
