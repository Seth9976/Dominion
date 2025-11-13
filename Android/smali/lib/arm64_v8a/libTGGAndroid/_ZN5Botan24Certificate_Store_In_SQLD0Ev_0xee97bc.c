// 函数: _ZN5Botan24Certificate_Store_In_SQLD0Ev
// 地址: 0xee97bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
void* x19 = entry_x0
*entry_x0 = _vtable_for_Botan::Certificate_Store_In_SQL + 0x10
std::__ndk1::mutex::~mutex()

if ((zx.d(*(x19 + 0x38)) & 1) == 0)
    if ((zx.d(*(x19 + 0x20)) & 1) != 0)
        goto label_ee9818
    
    goto label_ee97ec

operator delete(*(x19 + 0x48))
int64_t* x20

if ((zx.d(*(x19 + 0x20)) & 1) == 0)
label_ee97ec:
    x20 = *(x19 + 0x18)
    
    if (x20 != 0)
    label_ee9834:
        int64_t x9_2
        int32_t i
        
        do
            x9_2 = __ldaxr(&x20[1])
            i = __stlxr(x9_2 - 1, &x20[1])
        while (i != 0)
        
        if (x9_2 == 0)
            (*(*x20 + 0x10))(x20)
            std::__ndk1::__shared_weak_count::__release_weak()
            return operator delete(x19) __tailcall
else
label_ee9818:
    operator delete(*(x19 + 0x30))
    x20 = *(x19 + 0x18)
    
    if (x20 != 0)
        goto label_ee9834
return operator delete(x19) __tailcall
