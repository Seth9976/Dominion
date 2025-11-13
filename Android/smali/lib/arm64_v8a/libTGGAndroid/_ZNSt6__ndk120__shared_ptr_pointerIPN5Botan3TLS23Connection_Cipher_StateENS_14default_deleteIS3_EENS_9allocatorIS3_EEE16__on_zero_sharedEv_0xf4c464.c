// 函数: _ZNSt6__ndk120__shared_ptr_pointerIPN5Botan3TLS23Connection_Cipher_StateENS_14default_deleteIS3_EENS_9allocatorIS3_EEE16__on_zero_sharedEv
// 地址: 0xf4c464
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x19 = *(entry_x0 + 0x18)

if (x19 == 0)
    return 

void* x0 = *(x19 + 0x10)

if (x0 != 0)
    *(x19 + 0x18) = x0
    operator delete(x0)

int64_t* x0_1 = *(x19 + 8)
*(x19 + 8) = 0

if (x0_1 != 0)
    (*(*x0_1 + 8))()

return operator delete(x19) __tailcall
