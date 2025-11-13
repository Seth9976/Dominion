// 函数: _ZN5Botan3TLS7Channel13process_alertERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xe5df20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_30
Botan::TLS::Alert::Alert(&var_30)
int32_t var_2c

if (var_2c == 0x64)
    int64_t* x0_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) = 0
    
    if (x0_1 != 0)
        (*(*x0_1 + 8))()

int64_t* x0_2 = *(arg1 + 0x18)
int64_t x20 = var_30
int64_t result = (*(*x0_2 + 0x20))(x0_2, x20)

if ((x20.d & 0xff) == 0)
    if (var_2c != 0)
        return result
    
    goto label_e5dfc0

void* x8_5 = *(arg1 + 0x40)

if (x8_5 != 0)
    int64_t* x0_3 = *(arg1 + 0x20)
    result = (*(*x0_3 + 0x10))(x0_3, *(x8_5 + 0x108) + 0x10)

if (var_2c == 0)
label_e5dfc0:
    char var_28_1 = 0
    int32_t var_24_1 = 0
    result = Botan::TLS::Channel::send_alert(arg1)

*(arg1 + 0xc8) = 1
return result
