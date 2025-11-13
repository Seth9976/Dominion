// 函数: _ZN5Botan11Hex_Encoder5writeEPKhm
// 地址: 0xd7a360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *(arg1 + 0x58)
int64_t x10 = *(arg1 + 0x88)
int64_t x2 = *(arg1 + 0x60) - x8
size_t x9_1 = x2 - x10

if (x2 u< x10)
    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, "buffer_insert", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x461)
else
    uint8_t const* x20_1 = arg1
    size_t entry_x2
    size_t x9_2
    
    x9_2 = x9_1 u< entry_x2 ? x9_1 : entry_x2
    
    if (x9_2 == 0)
        goto label_d7a3b8
    
    if (arg2 != 0)
        memmove(x8 + x10, arg2, x9_2)
        x8 = *(x20_1 + 0x58)
        x10 = *(x20_1 + 0x88)
        x2 = *(x20_1 + 0x60) - x8
    label_d7a3b8:
        
        if (x10 + entry_x2 u< x2)
            *(x20_1 + 0x88) = x10 + entry_x2
            return 
        
        Botan::Hex_Encoder::encode_and_send(x20_1, x8)
        arg1 = *(x20_1 + 0x58)
        int64_t x9_5 = *(x20_1 + 0x88)
        void* x2_2 = *(x20_1 + 0x60) - arg1
        size_t x19 = x9_5 + entry_x2 - x2_2
        uint64_t x21_2 = arg2 + x2_2 - x9_5
        
        if (x19 u>= x2_2)
            void* x2_3
            
            do
                Botan::Hex_Encoder::encode_and_send(x20_1, x21_2)
                arg1 = *(x20_1 + 0x58)
                x2_3 = *(x20_1 + 0x60) - arg1
                x19 -= x2_3
                x21_2 += x2_3
            while (x19 u>= x2_3)
        
        if (x19 == 0)
            goto label_d7a42c
        
        if (x21_2 != 0 && arg1 != 0)
            memmove(arg1, x21_2, x19)
        label_d7a42c:
            *(x20_1 + 0x88) = x19
            return 

Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
return Botan::Hex_Encoder::end_msg() __tailcall
