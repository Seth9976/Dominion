// 函数: _ZN5Botan11DER_Encoder9encode_ifEbRS0_
// 地址: 0xdefe94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = arg1

if ((arg2.d & 1) != 0)
    Botan::DER_Encoder::get_contents()
    int64_t x9_1 = *(result + 0x50)
    uint64_t var_48
    int64_t var_40
    int64_t x2_1 = var_40 - var_48
    
    if (x9_1 == *(result + 0x48))
        int64_t* x0_2 = *(result + 0x20)
        uint64_t var_30
        
        if (x0_2 == 0)
            var_30 = var_48
            int64_t var_28_1 = x2_1
            Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(result + 0x30, 
                &var_30)
        else
            var_30 = var_48
            int64_t var_18 = x2_1
            (*(*x0_2 + 0x30))(x0_2, &var_30, &var_18)
    else
        Botan::DER_Encoder::DER_Sequence::add_bytes(x9_1 - 0x38, var_48)
    
    int64_t var_38
    
    if (var_48 != 0)
        Botan::deallocate_memory(var_48, var_38 - var_48, 1)

return result
