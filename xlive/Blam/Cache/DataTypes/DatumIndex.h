#pragma once
#include <Windows.h>
#include <codecvt>
namespace Blam
{
	namespace Cache
	{
		namespace DataTypes
		{
			/*********************************************************************
			* Blam::Cache::DataTypes::DatumIndex
			* 4 BYTE Tag Structure for any TagIndices of Halo 2 CacheFiles
			**********************************************************************/
			struct DatumIndex
			{
				//Default Constructor
				DatumIndex()
				{
					this->Index = -1;
					this->Salt = -1;
				}
				//Copy Constructor
				DatumIndex(INT32 Identifier)
				{
					this->data = Identifier;
				}

				constexpr DatumIndex(short _index, short _salt) :
					Index(_index),
					Salt(_salt)
				{
				}

				static constexpr INT32 Null = 0xFFFFFFFF;

				//Returns true is DatumIndex is not Invalid
				inline bool IsNull() const
				{
					return this->Salt == -1 && this->Index == -1;
				}

				inline unsigned long ToInt() const
				{
					return data;
				}

				inline signed short ToAbsoluteIndex() const { return Index; };

				inline bool operator == (const DatumIndex &other) const
				{
					return this->data == other.data;
				}
				inline bool operator != (const DatumIndex &other) const
				{
					return this->data != other.data;
				}

				inline std::string ToString() const
				{
					std::stringstream ss;
					ss << "Index: " << std::hex << Index <<
						" Salt: " << std::hex << Salt <<
						" Datum: " << std::hex << data;
					return ss.str();
				}

				union {
					struct {
						signed short Index;
						signed short Salt;
					};
					unsigned long data;
				};
			};
			static_assert(sizeof(DatumIndex) == 4, "Invalid Size for struct (DatumIndex)");
		}
	}
}
			