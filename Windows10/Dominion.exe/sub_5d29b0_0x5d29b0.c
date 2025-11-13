// 函数: sub_5d29b0
// 地址: 0x5d29b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10
uint32_t eax

if (arg1 u> 0x8a)
label_5d3137:
    char const* const var_c_6 = "LayoutExtraIdx"
    var_10 = 0x20f2
label_5d3150:
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_10, 
        "LayoutExtraIdx")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = zx.d(lookup_table_5d3270[arg1])

switch (eax)
    case 0
        char const* const var_c = "LayoutExtraIdx"
        var_10 = 0x1ed1
        goto label_5d3150
    case 1
        if (arg2 s< 5)
            return 1
        
        if (arg2 s< 0xa)
            return 1
        
        if (arg2 s< 0xf)
            return 1
        
        char const* const var_c_1 = "LayoutExtraIdx"
        var_10 = 0x1ede
        goto label_5d3150
    case 2
        return 0
    case 3
        return 0
    case 4
        if (arg2 s< 4)
            return 0
        
        return 1
    case 5
        if (arg2 s< 4)
            return 0
        
        return 1
    case 7
        return 1
    case 8
        if (arg2 s< 8)
            return 0
        
        if (arg2 s>= 0x10)
            return 1
        
        return 0
    case 9
        return 0
    case 0xa
        if (arg2 s< 4)
            return 0
        
    label_5d2ad6:
        
        if (arg2 s>= 8)
            return 1
        
        return 0
    case 0xb
        return 0
    case 0xc
        if (arg2 s< 4)
            return 0
        
        if (arg2 s>= 0xc)
            return 1
        
        return 0
    case 0xd
        return 0
    case 0xe
        if (arg2 s< 4)
            return 0
        
        if (arg2 s>= 8)
            return 2
        
        return 0
    case 0xf
        return 2
    case 0x10
        if (arg2 s>= 8)
            return 1
        
        return 2
    case 0x11
        if (arg2 s< 8)
            return 2
        
        return 1
    case 0x12
        if (arg2 s< 4)
            return 0
        
        goto label_5d2ad6
    case 0x13
        if (arg2 s< 4)
            return 0
        
        return 1
    case 0x14
        if (arg2 s> 0x18)
            return 1
        
        return 0
    case 0x15
        return 0
    case 0x16
        if (arg2 s< 4)
            return 0
        
    label_5d2c43:
        return 0
    case 0x17
        return 2
    case 0x18
        if (arg2 s>= 4)
            return 1
        
        return 2
    case 0x19
        return 0
    case 0x1a
        if (arg2 s<= 0x14)
            return 0
        
        return 1
    case 0x1b
        if (arg2 s<= 0x14)
            return 0
        
        return 1
    case 0x1c
        if (arg2 s< 4)
            return 0
        
        goto label_5d2c43
    case 0x1d
        if (arg2 s< 4)
            return 0
        
        if (arg2 s< 8)
            return 0
        
        if (arg2 s< 0xc)
            return 0
        
        return 1
    case 0x1e
        if (arg2 s<= 4)
            return 0
        
        if (arg2 s<= 8)
            return 0
        
        if (arg2 s<= 0xc)
            return 0
        
        return 1
    case 0x1f
        if (arg2 s<= 4)
            return 0
        
        if (arg2 s<= 8)
            return 0
        
        if (arg2 s> 0xc)
            return 1
        
        return 0
    case 0x20
        if (arg2 s< 4)
            return 0
        
    label_5d2f96:
        
        if (arg2 s>= 8)
            return 1
        
        return 0
    case 0x21
        if (arg2 s< 4)
            return 0
        
        goto label_5d2f96
    case 0x22
        return 1
    case 0x23
        if (arg2 s< 3)
            return 1
        
        if (arg2 s< 6)
            return 1
        
        char const* const var_c_3 = "LayoutExtraIdx"
        var_10 = 0x1eee
        goto label_5d3150
    case 0x24
        if (arg2 s< 3)
            return 1
        
        if (arg2 s< 6)
            return 1
        
        if (arg2 s< 9)
            return 1
        
        char const* const var_c_2 = "LayoutExtraIdx"
        var_10 = 0x1ee7
        goto label_5d3150
    case 0x25
        if (arg2 s< 8)
            return 0
        
        if (arg2 s<= 0xb)
            return 1
        
        char const* const var_c_4 = "LayoutExtraIdx"
        var_10 = 0x1f84
        goto label_5d3150
    case 0x26
        if (arg2 s< 8)
            return 0
        
        return 1
    case 0x27
        if (arg2 s< 8)
            return 0
        
        return 1
    case 0x28
        if (arg2 s< 8)
            return 0
        
        return 1
    case 0x29
        if (arg2 s< 4)
            return 0
        
        return 1
    case 0x2a
        if (arg2 s> 4)
            return 1
        
        return 0
    case 0x2b
        if (arg2 s> 4)
            return 1
        
        return 0
    case 0x2c
        if (arg2 s<= 0x10)
            return 0
        
        return 1
    case 0x2d
        if (arg2 s<= 0x10)
            return 0
        
        return 1
    case 0x2e
        if (arg2 s<= 0x10)
            return 0
        
        return 1
    case 0x2f
        if (arg2 s<= 0x10)
            return 0
        
        return 1
    case 0x30
        if (arg2 s< 4)
            return 0
        
        if (arg2 s< 0xc)
            return 0
        
        return 1
    case 0x31
        if (arg2 s< 4)
            return 0
        
        if (arg2 s< 0xc)
            return 0
        
        return 1
    case 0x32
        if (arg2 s> 0x18)
            return 1
        
        return 0
    case 0x33
        if (arg2 s<= 0x18)
            return 0
        
        return 1
    case 0x34
        if (arg2 s< 4)
            return 0
        
        if (arg2 s< 0xc)
            return 0
        
        if (arg2 s< 0x14)
            return 0
        
        return 1
    case 0x35
        if (arg2 s> 0x14)
            return 1
        
        return 0
    case 0x36
        if (arg2 s> 0x14)
            return 1
        
        return 0
    case 0x37
        char const* const var_c_5 = "LayoutExtraIdx"
        var_10 = 0x208c
        goto label_5d3150
    case 0x38
        if (arg2 s>= 8)
            return 1
        
        return 0
    case 0x39
        if (arg2 s< 4)
            return 0
        
        return 1
    case 0x3a
        return 0
    case 0x3b
        if (arg2 s< 3)
            return 1
        
        if (arg2 s< 6)
            return 1
        
        if (arg2 s< 0xe)
            return 0
        
        if (arg2 s< 0x11)
            return 1
        
        if (arg2 s>= 0x19)
            return 1
        
        return 0
    case 0x3c
        if (arg2 s< 3)
            return 1
        
        if (arg2 s< 0xb)
            return 0
        
        if (arg2 s< 0xe)
            return 1
        
        if (arg2 s>= 0x16)
            return 1
        
        return 0
    case 0x3d
        if (arg2 s>= 4)
            return 1
        
        return 0
    case 0x3e
        if (arg2 s>= 4)
            return 1
        
        return 0
    case 0x3f
        if (arg2 s>= 4)
            return 1
        
        return 0
    case 0x40
        if (arg2 s>= 4)
            return 1
        
        return 0
    case 0x41
        goto label_5d3137
