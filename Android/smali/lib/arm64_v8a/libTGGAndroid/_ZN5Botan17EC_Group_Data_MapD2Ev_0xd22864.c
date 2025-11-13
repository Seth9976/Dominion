// 函数: _ZN5Botan17EC_Group_Data_MapD2Ev
// 地址: 0xd22864
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x21 = *(entry_x0 + 0x28)

if (x21 != 0)
    void* x22_1 = *(entry_x0 + 0x30)
    void* x0
    
    if (x22_1 != x21)
        do
            int64_t* x20_1 = *(x22_1 - 8)
            x22_1 -= 0x10
            
            if (x20_1 != 0)
                int64_t x9_1
                int32_t i
                
                do
                    x9_1 = __ldaxr(&x20_1[1])
                    i = __stlxr(x9_1 - 1, &x20_1[1])
                while (i != 0)
                
                if (x9_1 == 0)
                    (*(*x20_1 + 0x10))(x20_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_1 != x21)
        
        x0 = *(entry_x0 + 0x28)
    else
        x0 = x21
    
    *(entry_x0 + 0x30) = x21
    operator delete(x0)

return std::__ndk1::mutex::~mutex() __tailcall
