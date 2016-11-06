#pragma once
#include "stdafx.h"
#include "BaseMapper.h"
#include "RomData.h"

class MapperFactory
{
	private:
		static BaseMapper* GetMapperFromID(RomData &romData);

	public:
		static const uint16_t FdsMapperID = 65535;
		static const uint16_t NsfMapperID = 65534;
		static const uint16_t UnknownBoard = 65533;
		static const uint16_t UnifTf1201 = 65532;
		static const uint16_t UnifCoolboy = 65531;
		static const uint16_t UnifSmb2j = 65530;
		static const uint16_t UnifMalee = 65529;
		static const uint16_t UnifStreetHeroes = 65528;
		static const uint16_t UnifDreamTech01 = 65527;
		static const uint16_t UnifEdu2000 = 65526;
		static const uint16_t UnifGs2013 = 65525;
		static const uint16_t UnifGs2004 = 65524;
		static const uint16_t UnifNovelDiamond = 65523;

		static shared_ptr<BaseMapper> InitializeFromFile(string romFilename, stringstream *filestream, string ipsFilename, int32_t archiveFileIndex);
};
