// 函数: _ZN5Botan24Certificate_Store_In_SQLD2Ev
// 地址: 0xee9728
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::Certificate_Store_In_SQL + 0x10
int64_t result = std::__ndk1::mutex::~mutex()

if ((zx.d(entry_x0[7].b) & 1) == 0)
    if ((zx.d(entry_x0[4].b) & 1) != 0)
        goto label_ee9774
    
    goto label_ee9754

result = operator delete(entry_x0[9])
int64_t* x19_1

if ((zx.d(entry_x0[4].b) & 1) == 0)
label_ee9754:
    x19_1 = entry_x0[3]
    
    if (x19_1 != 0)
    label_ee9790:
        int64_t x9_1
        int32_t i
        
        do
            x9_1 = __ldaxr(&x19_1[1])
            i = __stlxr(x9_1 - 1, &x19_1[1])
        while (i != 0)
        
        if (x9_1 == 0)
            (*(*x19_1 + 0x10))(x19_1)
            return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
else
label_ee9774:
    result = operator delete(entry_x0[6])
    x19_1 = entry_x0[3]
    
    if (x19_1 != 0)
        goto label_ee9790
return result
