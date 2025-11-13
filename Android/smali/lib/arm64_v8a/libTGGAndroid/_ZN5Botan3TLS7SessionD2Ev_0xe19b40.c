// 函数: _ZN5Botan3TLS7SessionD2Ev
// 地址: 0xe19b40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if ((zx.d(*(entry_x0 + 0xb0)) & 1) != 0)
    operator delete(*(entry_x0 + 0xc0))
    
    if ((zx.d(*(entry_x0 + 0x90)) & 1) != 0)
    label_e19b8c:
        operator delete(*(entry_x0 + 0xa0))
        
        if ((zx.d(*(entry_x0 + 0x78)) & 1) == 0)
            goto label_e19b64
        
        goto label_e19b9c
else if ((zx.d(*(entry_x0 + 0x90)) & 1) != 0)
    goto label_e19b8c

void* x21

if ((zx.d(*(entry_x0 + 0x78)) & 1) == 0)
label_e19b64:
    x21 = *(entry_x0 + 0x60)
    
    if (x21 != 0)
        goto label_e19ba8
    
    goto label_e19b6c

label_e19b9c:
operator delete(*(entry_x0 + 0x88))
x21 = *(entry_x0 + 0x60)
void* x0_5

if (x21 == 0)
label_e19b6c:
    x0_5 = *(entry_x0 + 0x38)
    
    if (x0_5 != 0)
    label_e19be8:
        int64_t x8_7 = *(entry_x0 + 0x48)
        *(entry_x0 + 0x40) = x0_5
        Botan::deallocate_memory(x0_5, x8_7 - x0_5, 1)
else
label_e19ba8:
    int64_t* x20_1 = *(entry_x0 + 0x68)
    void* x0_4
    
    if (x20_1 == x21)
        x0_4 = x21
    else
        do
            x20_1 = &x20_1[-0x11]
            (*(*x20_1 + 0x10))(x20_1)
        while (x21 != x20_1)
        
        x0_4 = *(entry_x0 + 0x60)
    
    *(entry_x0 + 0x68) = x21
    operator delete(x0_4)
    x0_5 = *(entry_x0 + 0x38)
    
    if (x0_5 != 0)
        goto label_e19be8
void* x0_6 = *(entry_x0 + 0x20)

if (x0_6 != 0)
    *(entry_x0 + 0x28) = x0_6
    operator delete(x0_6)

void* result = *(entry_x0 + 8)

if (result == 0)
    return result

*(entry_x0 + 0x10) = result
return operator delete(result) __tailcall
