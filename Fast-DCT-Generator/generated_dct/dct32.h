// GENERATED CODE
// FDCT IDCT 32x32

inline void fdct_1d_32x32(const float* src, float *out, int stridea, int strideb)
{
	static const float v_00 = -0.785695f;
	static const float v_01 =  1.175876f;
	static const float v_02 =  0.949728f;
	static const float v_03 =  1.371831f;
	static const float v_04 =  1.093202f;
	static const float v_05 =  0.476434f;
	static const float v_06 =  0.727051f;
	static const float v_07 =  1.412510f;
	static const float v_08 =  1.247225f;
	static const float v_09 =  0.207508f;
	static const float v_0A =  0.604654f;
	static const float v_0B =  0.707107f;
	static const float v_0C =  0.095671f;
	static const float v_0D = -0.949728f;
	static const float v_0E =  0.842446f;
	static const float v_0F =  0.138617f;
	static const float v_10 =  0.785695f;
	static const float v_11 =  1.331544f;
	static const float v_12 =  0.069392f;
	static const float v_13 =  0.230970f;
	static const float v_14 =  0.176777f;
	static const float v_15 = -0.207508f;
	static const float v_16 =  0.410525f;
	static const float v_17 =  1.353318f;
	static const float v_18 =  1.047863f;
	static const float v_19 =  1.387040f;
	static const float v_1A =  0.275899f;
	static const float v_1B =  1.407404f;
	static const float v_1C =  1.135907f;
	static const float v_1D = -0.476434f;
	static const float v_1E =  1.278434f;
	static const float v_1F =  0.897168f;
	static const float v_20 =  0.343626f;
	static const float v_21 =  0.666656f;
	static const float v_22 =  1.213011f;
	static const float v_23 = -0.897168f;
	static const float v_24 = -0.727051f;
	static const float v_25 =  1.398907f;
	static const float v_26 = -0.410525f;

	for (int i = 0; i < 32; i++)
	{
		const float s_00 = src[ 0 * stridea];
		const float s_01 = src[ 1 * stridea];
		const float s_02 = src[ 2 * stridea];
		const float s_03 = src[ 3 * stridea];
		const float s_04 = src[ 4 * stridea];
		const float s_05 = src[ 5 * stridea];
		const float s_06 = src[ 6 * stridea];
		const float s_07 = src[ 7 * stridea];
		const float s_08 = src[ 8 * stridea];
		const float s_09 = src[ 9 * stridea];
		const float s_0A = src[10 * stridea];
		const float s_0B = src[11 * stridea];
		const float s_0C = src[12 * stridea];
		const float s_0D = src[13 * stridea];
		const float s_0E = src[14 * stridea];
		const float s_0F = src[15 * stridea];
		const float s_10 = src[16 * stridea];
		const float s_11 = src[17 * stridea];
		const float s_12 = src[18 * stridea];
		const float s_13 = src[19 * stridea];
		const float s_14 = src[20 * stridea];
		const float s_15 = src[21 * stridea];
		const float s_16 = src[22 * stridea];
		const float s_17 = src[23 * stridea];
		const float s_18 = src[24 * stridea];
		const float s_19 = src[25 * stridea];
		const float s_1A = src[26 * stridea];
		const float s_1B = src[27 * stridea];
		const float s_1C = src[28 * stridea];
		const float s_1D = src[29 * stridea];
		const float s_1E = src[30 * stridea];
		const float s_1F = src[31 * stridea];

		const float x_00 = s_00 + s_1F;
		const float x_11 = s_01 + s_1E;
		const float x_12 = s_02 + s_1D;
		const float x_13 = s_03 + s_1C;
		const float x_14 = s_04 + s_1B;
		const float x_15 = s_05 + s_1A;
		const float x_16 = s_06 + s_19;
		const float x_17 = s_07 + s_18;
		const float x_18 = s_08 + s_17;
		const float x_19 = s_09 + s_16;
		const float x_1A = s_0A + s_15;
		const float x_1B = s_0B + s_14;
		const float x_1C = s_0C + s_13;
		const float x_1D = s_0D + s_12;
		const float x_1E = s_0E + s_11;
		const float x_1F = s_0F + s_10;
		const float x_01 = s_00 - s_1F;
		const float x_02 = s_01 - s_1E;
		const float x_03 = s_02 - s_1D;
		const float x_04 = s_03 - s_1C;
		const float x_05 = s_04 - s_1B;
		const float x_06 = s_05 - s_1A;
		const float x_07 = s_06 - s_19;
		const float x_08 = s_07 - s_18;
		const float x_09 = s_08 - s_17;
		const float x_0A = s_09 - s_16;
		const float x_0B = s_0A - s_15;
		const float x_0C = s_0B - s_14;
		const float x_0D = s_0C - s_13;
		const float x_0E = s_0D - s_12;
		const float x_0F = s_0E - s_11;
		const float x_10 = s_0F - s_10;
		const float x_62 = x_00 + x_1F;
		const float x_63 = x_11 + x_1E;
		const float x_64 = x_12 + x_1D;
		const float x_65 = x_13 + x_1C;
		const float x_66 = x_14 + x_1B;
		const float x_67 = x_15 + x_1A;
		const float x_68 = x_16 + x_19;
		const float x_69 = x_17 + x_18;
		const float x_6A = x_00 - x_1F;
		const float x_6B = x_11 - x_1E;
		const float x_6C = x_12 - x_1D;
		const float x_6D = x_13 - x_1C;
		const float x_6E = x_14 - x_1B;
		const float x_6F = x_15 - x_1A;
		const float x_70 = x_16 - x_19;
		const float x_71 = x_17 - x_18;
		const float x_72 = x_62 + x_69;
		const float x_73 = x_63 + x_68;
		const float x_74 = x_64 + x_67;
		const float x_75 = x_65 + x_66;
		const float x_76 = x_62 - x_69;
		const float x_77 = x_63 - x_68;
		const float x_78 = x_64 - x_67;
		const float x_79 = x_65 - x_66;
		const float x_7A = x_72 + x_75;
		const float x_7B = x_73 + x_74;
		const float x_7C = x_72 - x_75;
		const float x_7D = x_73 - x_74;
		const float x_7E = v_19 * x_76 + v_1A * x_79;
		const float x_7F = v_01 * x_77 + v_10 * x_78;
		const float x_80 = v_00 * x_77 + v_01 * x_78;
		const float x_81 = v_1A * x_76 - v_19 * x_79;
		const float x_82 = v_14 * (x_7E - x_7F);
		const float x_83 = v_14 * (x_80 - x_81);
		const float x_84 = v_1B * x_6A + v_0F * x_71;
		const float x_85 = v_17 * x_6B + v_16 * x_70;
		const float x_86 = v_08 * x_6C + v_21 * x_6F;
		const float x_87 = v_04 * x_6D + v_1F * x_6E;
		const float x_88 = -v_1F * x_6D + v_04 * x_6E;
		const float x_89 = v_21 * x_6C - v_08 * x_6F;
		const float x_8A = -v_16 * x_6B + v_17 * x_70;
		const float x_8B = v_0F * x_6A - v_1B * x_71;
		const float x_8C = x_84 + x_87;
		const float x_8D = x_85 + x_86;
		const float x_8E = x_84 - x_87;
		const float x_8F = x_85 - x_86;
		const float x_90 = v_14 * (x_8C - x_8D);
		const float x_91 = v_13 * x_8E + v_0C * x_8F;
		const float x_92 = v_0C * x_8E - v_13 * x_8F;
		const float x_93 = x_88 + x_8B;
		const float x_94 = x_89 + x_8A;
		const float x_95 = x_88 - x_8B;
		const float x_96 = x_89 - x_8A;
		const float x_97 = v_14 * (x_93 - x_94);
		const float x_98 = v_13 * x_95 + v_0C * x_96;
		const float x_99 = v_0C * x_95 - v_13 * x_96;
		const float x_20 = v_07 * x_01 + v_12 * x_10;
		const float x_21 = v_25 * x_02 + v_09 * x_0F;
		const float x_22 = v_03 * x_03 + v_20 * x_0E;
		const float x_23 = v_11 * x_04 + v_05 * x_0D;
		const float x_24 = v_1E * x_05 + v_0A * x_0C;
		const float x_25 = v_22 * x_06 + v_06 * x_0B;
		const float x_26 = v_1C * x_07 + v_0E * x_0A;
		const float x_27 = v_18 * x_08 + v_02 * x_09;
		const float x_28 = -v_02 * x_08 + v_18 * x_09;
		const float x_29 = v_0E * x_07 - v_1C * x_0A;
		const float x_2A = -v_06 * x_06 + v_22 * x_0B;
		const float x_2B = v_0A * x_05 - v_1E * x_0C;
		const float x_2C = -v_05 * x_04 + v_11 * x_0D;
		const float x_2D = v_20 * x_03 - v_03 * x_0E;
		const float x_2E = -v_09 * x_02 + v_25 * x_0F;
		const float x_2F = v_12 * x_01 - v_07 * x_10;
		const float x_30 = x_20 + x_27;
		const float x_31 = x_21 + x_26;
		const float x_32 = x_22 + x_25;
		const float x_33 = x_23 + x_24;
		const float x_34 = x_20 - x_27;
		const float x_35 = x_21 - x_26;
		const float x_36 = x_22 - x_25;
		const float x_37 = x_23 - x_24;
		const float x_3A = x_30 + x_33;
		const float x_3B = x_31 + x_32;
		const float x_3C = x_30 - x_33;
		const float x_3D = x_31 - x_32;
		const float x_3E = v_14 * (x_3A - x_3B);
		const float x_3F = v_13 * x_3C + v_0C * x_3D;
		const float x_40 = v_0C * x_3C - v_13 * x_3D;
		const float x_41 = v_19 * x_34 + v_1A * x_37;
		const float x_42 = v_01 * x_35 + v_10 * x_36;
		const float x_43 = v_00 * x_35 + v_01 * x_36;
		const float x_44 = v_1A * x_34 - v_19 * x_37;
		const float x_45 = v_14 * (x_41 + x_42);
		const float x_46 = v_14 * (x_41 - x_42);
		const float x_47 = v_14 * (x_43 + x_44);
		const float x_48 = v_14 * (x_43 - x_44);
		const float x_38 = v_0B * (x_46 - x_48);
		const float x_39 = v_0B * (x_46 + x_48);
		const float x_49 = x_28 + x_2F;
		const float x_4A = x_29 + x_2E;
		const float x_4B = x_2A + x_2D;
		const float x_4C = x_2B + x_2C;
		const float x_4D = x_28 - x_2F;
		const float x_4E = x_29 - x_2E;
		const float x_4F = x_2A - x_2D;
		const float x_50 = x_2B - x_2C;
		const float x_53 = x_49 + x_4C;
		const float x_54 = x_4A + x_4B;
		const float x_55 = x_49 - x_4C;
		const float x_56 = x_4A - x_4B;
		const float x_57 = v_14 * (x_53 - x_54);
		const float x_58 = v_13 * x_55 + v_0C * x_56;
		const float x_59 = v_0C * x_55 - v_13 * x_56;
		const float x_5A = v_19 * x_4D + v_1A * x_50;
		const float x_5B = v_01 * x_4E + v_10 * x_4F;
		const float x_5C = v_00 * x_4E + v_01 * x_4F;
		const float x_5D = v_1A * x_4D - v_19 * x_50;
		const float x_5E = v_14 * (x_5A + x_5B);
		const float x_5F = v_14 * (x_5A - x_5B);
		const float x_60 = v_14 * (x_5C + x_5D);
		const float x_61 = v_14 * (x_5C - x_5D);
		const float x_51 = v_0B * (x_5F - x_61);
		const float x_52 = v_0B * (x_5F + x_61);

		out[ 0 * stridea] = v_14 * (x_7A + x_7B);
		out[ 1 * stridea] = v_14 * (x_3A + x_3B);
		out[ 2 * stridea] = v_14 * (x_8C + x_8D);
		out[ 3 * stridea] = v_0B * (x_45 - x_60);
		out[ 4 * stridea] = v_14 * (x_7E + x_7F);
		out[ 5 * stridea] = v_0B * (x_45 + x_60);
		out[ 6 * stridea] = v_0B * (x_91 - x_99);
		out[ 7 * stridea] = v_0B * (x_3F + x_59);
		out[ 8 * stridea] = v_13 * x_7C + v_0C * x_7D;
		out[ 9 * stridea] = v_0B * (x_3F - x_59);
		out[10 * stridea] = v_0B * (x_91 + x_99);
		out[11 * stridea] = v_0B * (x_38 - x_52);
		out[12 * stridea] = v_0B * (x_82 - x_83);
		out[13 * stridea] = v_0B * (x_38 + x_52);
		out[14 * stridea] = v_0B * (x_90 + x_97);
		out[15 * stridea] = v_0B * (x_3E + x_57);
		out[16 * stridea] = v_14 * (x_7A - x_7B);
		out[17 * stridea] = v_0B * (x_3E - x_57);
		out[18 * stridea] = v_0B * (x_90 - x_97);
		out[19 * stridea] = v_0B * (x_39 - x_51);
		out[20 * stridea] = v_0B * (x_82 + x_83);
		out[21 * stridea] = v_0B * (x_39 + x_51);
		out[22 * stridea] = v_0B * (x_92 - x_98);
		out[23 * stridea] = v_0B * (x_40 + x_58);
		out[24 * stridea] = v_0C * x_7C - v_13 * x_7D;
		out[25 * stridea] = v_0B * (x_40 - x_58);
		out[26 * stridea] = v_0B * (x_92 + x_98);
		out[27 * stridea] = v_0B * (x_47 - x_5E);
		out[28 * stridea] = v_14 * (x_80 + x_81);
		out[29 * stridea] = v_0B * (x_47 + x_5E);
		out[30 * stridea] = v_14 * (x_93 + x_94);
		out[31 * stridea] = v_14 * (x_53 + x_54);

		out += strideb;
		src += strideb;
	}
}

void fdct_32x32(const float* src, float *out)
{
	float* tmp = (float*)calloc(32 * 32, sizeof(float));
	fdct_1d_32x32(src, tmp, 1, 32);
	fdct_1d_32x32(tmp, out, 32, 1);
	free(tmp);
}

inline void idct_1d_32x32(const float* src, float *out, int stridea, int strideb)
{
	static const float v_00 = -0.785695f;
	static const float v_01 = -0.707107f;
	static const float v_02 =  1.175876f;
	static const float v_03 =  0.949728f;
	static const float v_04 =  1.371831f;
	static const float v_05 =  0.125000f;
	static const float v_06 =  1.093202f;
	static const float v_07 = -0.343626f;
	static const float v_08 =  0.476434f;
	static const float v_09 =  0.727051f;
	static const float v_0A =  0.207508f;
	static const float v_0B =  1.412510f;
	static const float v_0C =  0.604654f;
	static const float v_0D =  1.247225f;
	static const float v_0E =  0.707107f;
	static const float v_0F = -0.604654f;
	static const float v_10 = -0.842446f;
	static const float v_11 = -0.069392f;
	static const float v_12 = -0.949728f;
	static const float v_13 =  0.842446f;
	static const float v_14 =  1.306563f;
	static const float v_15 =  0.541196f;
	static const float v_16 =  0.138617f;
	static const float v_17 =  0.785695f;
	static const float v_18 =  1.331544f;
	static const float v_19 =  0.069392f;
	static const float v_1A =  0.176777f;
	static const float v_1B =  0.250000f;
	static const float v_1C = -0.275899f;
	static const float v_1D = -0.207508f;
	static const float v_1E =  0.410525f;
	static const float v_1F =  1.353318f;
	static const float v_20 =  1.047863f;
	static const float v_21 =  1.387040f;
	static const float v_22 =  1.414214f;
	static const float v_23 =  1.407404f;
	static const float v_24 =  0.275899f;
	static const float v_25 =  1.135907f;
	static const float v_26 = -0.476434f;
	static const float v_27 =  1.278434f;
	static const float v_28 =  0.343626f;
	static const float v_29 =  0.897168f;
	static const float v_2A =  0.666656f;
	static const float v_2B =  1.213011f;
	static const float v_2C = -0.541196f;
	static const float v_2D = -0.727051f;
	static const float v_2E =  1.398907f;

	for (int i = 0; i < 32; i++)
	{
		const float s_00 = src[ 0 * stridea];
		const float s_01 = src[ 1 * stridea];
		const float s_02 = src[ 2 * stridea];
		const float s_03 = src[ 3 * stridea];
		const float s_04 = src[ 4 * stridea];
		const float s_05 = src[ 5 * stridea];
		const float s_06 = src[ 6 * stridea];
		const float s_07 = src[ 7 * stridea];
		const float s_08 = src[ 8 * stridea];
		const float s_09 = src[ 9 * stridea];
		const float s_0A = src[10 * stridea];
		const float s_0B = src[11 * stridea];
		const float s_0C = src[12 * stridea];
		const float s_0D = src[13 * stridea];
		const float s_0E = src[14 * stridea];
		const float s_0F = src[15 * stridea];
		const float s_10 = src[16 * stridea];
		const float s_11 = src[17 * stridea];
		const float s_12 = src[18 * stridea];
		const float s_13 = src[19 * stridea];
		const float s_14 = src[20 * stridea];
		const float s_15 = src[21 * stridea];
		const float s_16 = src[22 * stridea];
		const float s_17 = src[23 * stridea];
		const float s_18 = src[24 * stridea];
		const float s_19 = src[25 * stridea];
		const float s_1A = src[26 * stridea];
		const float s_1B = src[27 * stridea];
		const float s_1C = src[28 * stridea];
		const float s_1D = src[29 * stridea];
		const float s_1E = src[30 * stridea];
		const float s_1F = src[31 * stridea];

		const float x_00 = v_22 * s_00;
		const float x_11 = v_0B * s_01 + v_19 * s_1F;
		const float x_12 = v_23 * s_02 + v_16 * s_1E;
		const float x_13 = v_2E * s_03 + v_0A * s_1D;
		const float x_14 = v_21 * s_04 + v_24 * s_1C;
		const float x_15 = v_04 * s_05 + v_28 * s_1B;
		const float x_16 = v_1F * s_06 + v_1E * s_1A;
		const float x_17 = v_18 * s_07 + v_08 * s_19;
		const float x_18 = v_14 * s_08 + v_15 * s_18;
		const float x_19 = v_27 * s_09 + v_0C * s_17;
		const float x_1A = v_0D * s_0A + v_2A * s_16;
		const float x_1B = v_2B * s_0B + v_09 * s_15;
		const float x_1C = v_02 * s_0C + v_17 * s_14;
		const float x_1D = v_25 * s_0D + v_13 * s_13;
		const float x_1E = v_06 * s_0E + v_29 * s_12;
		const float x_1F = v_20 * s_0F + v_03 * s_11;
		const float x_01 = v_22 * s_10;
		const float x_02 = -v_03 * s_0F + v_20 * s_11;
		const float x_03 = v_29 * s_0E - v_06 * s_12;
		const float x_04 = v_10 * s_0D + v_25 * s_13;
		const float x_05 = v_17 * s_0C - v_02 * s_14;
		const float x_06 = -v_09 * s_0B + v_2B * s_15;
		const float x_07 = v_2A * s_0A - v_0D * s_16;
		const float x_08 = -v_0C * s_09 + v_27 * s_17;
		const float x_09 = v_15 * s_08 - v_14 * s_18;
		const float x_0A = -v_08 * s_07 + v_18 * s_19;
		const float x_0B = v_1E * s_06 - v_1F * s_1A;
		const float x_0C = v_07 * s_05 + v_04 * s_1B;
		const float x_0D = v_24 * s_04 - v_21 * s_1C;
		const float x_0E = -v_0A * s_03 + v_2E * s_1D;
		const float x_0F = v_16 * s_02 - v_23 * s_1E;
		const float x_10 = v_11 * s_01 + v_0B * s_1F;
		const float x_6C = x_00 + x_01;
		const float x_6E = x_11 + x_1F;
		const float x_6F = x_12 + x_1E;
		const float x_70 = x_13 + x_1D;
		const float x_71 = x_14 + x_1C;
		const float x_72 = x_15 + x_1B;
		const float x_73 = x_16 + x_1A;
		const float x_74 = x_17 + x_19;
		const float x_75 = v_22 * x_18;
		const float x_76 = x_00 - x_01;
		const float x_77 = x_11 - x_1F;
		const float x_78 = x_12 - x_1E;
		const float x_79 = x_13 - x_1D;
		const float x_7A = x_14 - x_1C;
		const float x_7B = x_15 - x_1B;
		const float x_7C = x_16 - x_1A;
		const float x_6D = x_17 - x_19;
		const float x_83 = x_6C + x_75;
		const float x_84 = x_6E + x_74;
		const float x_85 = x_6F + x_73;
		const float x_86 = x_70 + x_72;
		const float x_87 = v_22 * x_71;
		const float x_88 = x_6C - x_75;
		const float x_89 = x_6E - x_74;
		const float x_8A = x_6F - x_73;
		const float x_8B = x_70 - x_72;
		const float x_8E = x_83 + x_87;
		const float x_8F = x_84 + x_86;
		const float x_90 = v_22 * x_85;
		const float x_91 = x_83 - x_87;
		const float x_92 = x_84 - x_86;
		const float x_93 = v_1A * (x_8E - x_90);
		const float x_94 = v_1A * (x_91 + x_92);
		const float x_95 = v_1A * (x_91 - x_92);
		const float x_96 = v_22 * x_88;
		const float x_97 = v_14 * x_89 + v_15 * x_8B;
		const float x_98 = v_22 * x_8A;
		const float x_99 = -v_15 * x_89 + v_14 * x_8B;
		const float x_9A = v_05 * (x_96 + x_98) + v_1A * x_97;
		const float x_9B = v_1A * (x_96 - x_98);
		const float x_9C = v_05 * (x_96 + x_98) - v_1A * x_97;
		const float x_9D = v_1B * x_99;
		const float x_8C = v_0E * (x_9B - x_9D);
		const float x_8D = v_0E * (x_9B + x_9D);
		const float x_9E = v_22 * x_76;
		const float x_9F = v_24 * x_6D + v_21 * x_77;
		const float x_A0 = v_14 * x_78 + v_15 * x_7C;
		const float x_A1 = v_02 * x_79 + v_17 * x_7B;
		const float x_A2 = v_22 * x_7A;
		const float x_A3 = v_00 * x_79 + v_02 * x_7B;
		const float x_A4 = v_15 * x_78 - v_14 * x_7C;
		const float x_A5 = v_21 * x_6D - v_24 * x_77;
		const float x_A7 = x_9E + x_A2;
		const float x_A8 = x_9F + x_A1;
		const float x_A9 = v_22 * x_A0;
		const float x_AA = x_9E - x_A2;
		const float x_AB = x_9F - x_A1;
		const float x_AC = v_05 * (x_A7 + x_A9) + v_1A * x_A8;
		const float x_AD = v_1A * (x_A7 - x_A9);
		const float x_AE = v_05 * (x_A7 + x_A9) - v_1A * x_A8;
		const float x_AF = v_1A * (x_AA + x_AB);
		const float x_B0 = v_1A * (x_AA - x_AB);
		const float x_B1 = v_22 * x_A4;
		const float x_B2 = x_A3 + x_A5;
		const float x_B3 = x_A3 - x_A5;
		const float x_B4 = v_1A * (x_B1 + x_B2);
		const float x_B5 = v_1A * (x_B1 - x_B2);
		const float x_B6 = v_1B * x_B3;
		const float x_A6 = -x_B5;
		const float x_7D = v_0E * (x_AF - x_A6);
		const float x_7E = v_0E * (x_AF + x_A6);
		const float x_7F = v_0E * (x_AD + x_B6);
		const float x_80 = v_0E * (x_AD - x_B6);
		const float x_81 = v_0E * (x_B0 - x_B4);
		const float x_82 = v_0E * (x_B0 + x_B4);
		const float x_20 = v_22 * x_09;
		const float x_21 = x_08 + x_0A;
		const float x_22 = x_07 + x_0B;
		const float x_23 = x_06 + x_0C;
		const float x_24 = x_05 + x_0D;
		const float x_25 = x_04 + x_0E;
		const float x_26 = x_03 + x_0F;
		const float x_27 = x_02 + x_10;
		const float x_28 = x_02 - x_10;
		const float x_29 = x_03 - x_0F;
		const float x_2A = x_04 - x_0E;
		const float x_2B = x_05 - x_0D;
		const float x_2C = x_06 - x_0C;
		const float x_2D = x_07 - x_0B;
		const float x_2E = x_08 - x_0A;
		const float x_37 = v_22 * x_20;
		const float x_38 = v_21 * x_21 + v_24 * x_27;
		const float x_39 = v_14 * x_22 + v_15 * x_26;
		const float x_3A = v_02 * x_23 + v_17 * x_25;
		const float x_3B = v_22 * x_24;
		const float x_3C = v_00 * x_23 + v_02 * x_25;
		const float x_3D = v_15 * x_22 - v_14 * x_26;
		const float x_3E = v_1C * x_21 + v_21 * x_27;
		const float x_40 = x_37 + x_3B;
		const float x_41 = x_38 + x_3A;
		const float x_42 = v_22 * x_39;
		const float x_43 = x_37 - x_3B;
		const float x_44 = x_38 - x_3A;
		const float x_45 = v_05 * (x_40 + x_42) + v_1A * x_41;
		const float x_46 = v_1A * (x_40 - x_42);
		const float x_47 = v_05 * (x_40 + x_42) - v_1A * x_41;
		const float x_48 = v_1A * (x_43 + x_44);
		const float x_49 = v_1A * (x_43 - x_44);
		const float x_4A = v_22 * x_3D;
		const float x_4B = x_3C + x_3E;
		const float x_4C = x_3C - x_3E;
		const float x_4D = v_1A * (x_4A + x_4B);
		const float x_4E = v_1A * (x_4A - x_4B);
		const float x_4F = v_1B * x_4C;
		const float x_3F = -x_4E;
		const float x_2F = v_0E * (x_48 - x_3F);
		const float x_30 = v_0E * (x_48 + x_3F);
		const float x_31 = v_0E * (x_46 + x_4F);
		const float x_32 = v_0E * (x_46 - x_4F);
		const float x_33 = v_0E * (x_49 - x_4D);
		const float x_34 = v_0E * (x_49 + x_4D);
		const float x_50 = v_22 * x_2B;
		const float x_51 = x_2A + x_2C;
		const float x_52 = x_29 + x_2D;
		const float x_53 = x_28 + x_2E;
		const float x_54 = x_28 - x_2E;
		const float x_55 = x_29 - x_2D;
		const float x_56 = x_2A - x_2C;
		const float x_5E = v_22 * x_50;
		const float x_5F = v_14 * x_51 + v_15 * x_53;
		const float x_60 = v_22 * x_52;
		const float x_61 = -v_15 * x_51 + v_14 * x_53;
		const float x_62 = v_05 * (x_5E + x_60) + v_1A * x_5F;
		const float x_63 = v_1A * (x_5E - x_60);
		const float x_64 = v_05 * (x_5E + x_60) - v_1A * x_5F;
		const float x_65 = v_1B * x_61;
		const float x_57 = v_0E * (x_63 - x_65);
		const float x_58 = v_0E * (x_63 + x_65);
		const float x_66 = v_22 * x_55;
		const float x_67 = x_54 + x_56;
		const float x_68 = x_54 - x_56;
		const float x_69 = v_1A * (x_66 + x_67);
		const float x_6A = v_1A * (x_66 - x_67);
		const float x_6B = v_1B * x_68;
		const float x_59 = -x_6A;
		const float x_35 = -x_57;
		const float x_36 = -x_64;
		const float x_5A = -x_2F;
		const float x_5B = -x_31;
		const float x_5C = -x_33;
		const float x_5D = -x_47;

		out[ 0 * stridea] = v_05 * (x_8E + x_90) + v_1A * x_8F;
		out[ 1 * stridea] = v_01 * x_5D + v_0E * x_AC;
		out[ 2 * stridea] = v_0E * (x_5D + x_AC);
		out[ 3 * stridea] = v_0E * (x_36 + x_9A);
		out[ 4 * stridea] = v_01 * x_36 + v_0E * x_9A;
		out[ 5 * stridea] = v_01 * x_34 + v_0E * x_7D;
		out[ 6 * stridea] = v_0E * (x_34 + x_7D);
		out[ 7 * stridea] = v_0E * (x_59 + x_94);
		out[ 8 * stridea] = v_01 * x_59 + v_0E * x_94;
		out[ 9 * stridea] = v_01 * x_5C + v_0E * x_7E;
		out[10 * stridea] = v_0E * (x_5C + x_7E);
		out[11 * stridea] = v_0E * (x_58 + x_8C);
		out[12 * stridea] = v_01 * x_58 + v_0E * x_8C;
		out[13 * stridea] = v_01 * x_32 + v_0E * x_7F;
		out[14 * stridea] = v_0E * (x_32 + x_7F);
		out[15 * stridea] = v_0E * (x_6B + x_93);
		out[16 * stridea] = v_01 * x_6B + v_0E * x_93;
		out[17 * stridea] = v_01 * x_5B + v_0E * x_80;
		out[18 * stridea] = v_0E * (x_5B + x_80);
		out[19 * stridea] = v_0E * (x_35 + x_8D);
		out[20 * stridea] = v_01 * x_35 + v_0E * x_8D;
		out[21 * stridea] = v_01 * x_30 + v_0E * x_81;
		out[22 * stridea] = v_0E * (x_30 + x_81);
		out[23 * stridea] = v_0E * (x_69 + x_95);
		out[24 * stridea] = v_01 * x_69 + v_0E * x_95;
		out[25 * stridea] = v_01 * x_5A + v_0E * x_82;
		out[26 * stridea] = v_0E * (x_5A + x_82);
		out[27 * stridea] = v_0E * (x_62 + x_9C);
		out[28 * stridea] = v_01 * x_62 + v_0E * x_9C;
		out[29 * stridea] = v_01 * x_45 + v_0E * x_AE;
		out[30 * stridea] = v_0E * (x_45 + x_AE);
		out[31 * stridea] = v_05 * (x_8E + x_90) - v_1A * x_8F;

		out += strideb;
		src += strideb;
	}
}

void idct_32x32(const float* src, float *out)
{
	float* tmp = (float*)calloc(32 * 32, sizeof(float));
	idct_1d_32x32(src, tmp, 1, 32);
	idct_1d_32x32(tmp, out, 32, 1);
	free(tmp);
}