// 函数: func
// 地址: 0xef2a7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_2 = *(retval + 0x60)

if (i_2 != 0)
    int64_t* i
    
    do
        i = *i_2
        
        if ((zx.d(i_2[5].b) & 1) != 0)
            operator delete(i_2[7])
            
            if ((zx.d(i_2[2].b) & 1) != 0)
                operator delete(i_2[4])
        else if ((zx.d(i_2[2].b) & 1) != 0)
            operator delete(i_2[4])
        
        operator delete(i_2)
        i_2 = i
    while (i != 0)

void* x0 = *(retval + 0x50)
*(retval + 0x50) = 0

if (x0 != 0)
    operator delete(x0)

void* i_3 = *(retval + 0x38)

if (i_3 != 0)
    void* i_1
    
    do
        void* x0_5 = *(i_3 + 0x30)
        i_1 = *i_3
        *(i_3 + 0x28) = _vtable_for_Botan::OID + 0x10
        
        if (x0_5 != 0)
            *(i_3 + 0x38) = x0_5
            operator delete(x0_5)
        
        if ((zx.d(*(i_3 + 0x10)) & 1) != 0)
            operator delete(*(i_3 + 0x20))
        
        operator delete(i_3)
        i_3 = i_1
    while (i_1 != 0)

void* x0_7 = *(retval + 0x28)
*(retval + 0x28) = 0

if (x0_7 != 0)
    operator delete(x0_7)

return std::__ndk1::mutex::~mutex() __tailcall
