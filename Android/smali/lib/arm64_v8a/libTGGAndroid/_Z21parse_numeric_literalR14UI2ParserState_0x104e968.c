// 函数: _Z21parse_numeric_literalR14UI2ParserState
// 地址: 0x104e968
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

parse_hex_prefix(arg1)
int32_t var_48
int32_t var_60
int128_t* entry_x8

if (var_48 - 2 u> 2)
    parse_integer_string(arg1)
    
    if (var_60 - 2 u>= 3)
        *entry_x8 = data_24b6268
        XString::XString(&entry_x8[1])
    else
        UI2Parse_Exact(arg1, ".")
        int32_t var_78
        
        if (var_78 - 2 u>= 3)
            void* x20_2 = *arg1
            int32_t x0_18 = atoi(XString::operator char const*())
            int64_t x8_15 = sx.q(*(x20_2 + 0x428))
            *(x20_2 + 0x428) = x8_15.d + 1
            *(x20_2 + x8_15 * 0x38 + 0xa8) = 2
            *(x20_2 + x8_15 * 0x38 + 0xb0) = x0_18
            XString::XString()
            *entry_x8 = 3
            *(entry_x8 + 8) = x20_2 + x8_15 * 0x38 + 0xa8
        else
            parse_integer_string(arg1)
            int32_t var_90
            
            if (var_90 - 2 u> 2)
                void* x20_3 = *arg1
                double v0_3 = atof(XString::operator char const*())
                int64_t x8_16 = sx.q(*(x20_3 + 0x428))
                v0_3.d = fconvert.s(v0_3)
                *(x20_3 + 0x428) = x8_16.d + 1
                *(x20_3 + x8_16 * 0x38 + 0xa8) = 3
                *(x20_3 + x8_16 * 0x38 + 0xb0) = v0_3.d
                XString::XString()
                *entry_x8 = 3
                *(entry_x8 + 8) = x20_3 + x8_16 * 0x38 + 0xa8
            else
                UI2Parse_Exact(arg1, "e")
                int32_t var_a8
                char var_c8
                void var_50
                
                if (var_a8 - 2 u> 2)
                    XString::XString(&var_c8)
                    XString::operator+(&var_50)
                    void var_28
                    XString::operator+(&var_28)
                    XString::~XString()
                    XString::~XString()
                    void* x20_4 = *arg1
                    double v0_4 = atof(XString::operator char const*())
                    int64_t x8_17 = sx.q(*(x20_4 + 0x428))
                    v0_4.d = fconvert.s(v0_4)
                    *(x20_4 + 0x428) = x8_17.d + 1
                    *(x20_4 + x8_17 * 0x38 + 0xa8) = 3
                    *(x20_4 + x8_17 * 0x38 + 0xb0) = v0_4.d
                    XString::XString()
                    *entry_x8 = 3
                    *(entry_x8 + 8) = x20_4 + x8_17 * 0x38 + 0xa8
                else
                    parse_integer_string(arg1)
                    int32_t var_c0
                    
                    if (var_c0 - 2 u> 2)
                        XString::XString()
                        *entry_x8 = 1
                    else
                        char var_e0
                        XString::XString(&var_e0)
                        XString::operator+(&var_50)
                        void var_d8
                        XString::operator+(&var_d8)
                        char var_e8
                        XString::XString(&var_e8)
                        void var_d0
                        XString::operator+(&var_d0)
                        XString::operator+(&var_c8)
                        XString::~XString()
                        XString::~XString()
                        XString::~XString()
                        XString::~XString()
                        XString::~XString()
                        void* x20_1 = *arg1
                        double v0_2 = atof(XString::operator char const*())
                        int64_t x8_14 = sx.q(*(x20_1 + 0x428))
                        v0_2.d = fconvert.s(v0_2)
                        *(x20_1 + 0x428) = x8_14.d + 1
                        *(x20_1 + x8_14 * 0x38 + 0xa8) = 3
                        *(x20_1 + x8_14 * 0x38 + 0xb0) = v0_2.d
                        XString::XString()
                        *entry_x8 = 3
                        *(entry_x8 + 8) = x20_1 + x8_14 * 0x38 + 0xa8
                        XString::~XString()
                XString::~XString()
                XString::~XString()
            
            XString::~XString()
        
        XString::~XString()
else
    parse_hex_literal(arg1)
    
    if (var_60 - 2 u>= 3)
        XString::XString()
        *entry_x8 = 1
    else
        *entry_x8 = var_60.o
        XString::XString(&entry_x8[1])
XString::~XString()
return XString::~XString()
