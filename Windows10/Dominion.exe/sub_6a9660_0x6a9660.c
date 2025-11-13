// 函数: sub_6a9660
// 地址: 0x6a9660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg4 - 0xd u<= 8)
    switch (arg4)
        case 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
            uint32_t eax_1 = zx.d(lookup_table_6a9768[7 + arg4])
            int32_t var_28
            char const* const var_24
            
            switch (eax_1)
                case 0
                    eax_1 = zx.d(*(arg4 + 0x6a9787))
                    int32_t var_10_1 = 4
                    int32_t var_c_1 = 0
                    int32_t esi_1
                    
                    switch (eax_1)
                        case 0
                            esi_1 = 8
                        label_6a96d1:
                            int32_t eax_7
                            int32_t edx_1
                            edx_1:eax_7 = sx.q(arg3 + 3)
                            int32_t eax_10 = 0
                            
                            if (arg4 == 0x15)
                                eax_10 = 0x10
                            
                            return eax_10 + divs.dp.d(sx.q(3 + arg2), 4)
                                * ((eax_7 + (edx_1 & 3)) s>> 2) * esi_1
                        case 1
                            esi_1 = 0x10
                            goto label_6a96d1
                        case 2
                            var_24 = "TextureFormatCompressedBytesPerBlock"
                            var_28 = 0x9f
                case 1
                    var_24 = "TextureFormatCompressedBlockDimensions"
                    var_28 = 0xb1
            
            sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Engine\ImageUtils.cpp", var_28, 
                var_24)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn

int32_t eax_12 = sub_6a9600(arg2, arg4)
return sub_6a9570(arg3, arg4) * eax_12
