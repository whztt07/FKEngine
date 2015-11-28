/********************************************************************
*
*	���ļ���FKMMORPG��һ���֡����ļ���Ȩ����FreeKnightDuzhi(������)���С�
*	E-mail: duzhi5368@163.com
*	QQ: 	281862942
* 	
*	-----------------------------------------------------------------
*
*	�ļ�����	SoundDecoder
*	���ߣ�		FreeKnightDuzhi[ ������ ]
*	�ļ�˵����	�����ļ�������
*
*	�޸���:		
*	�޸�����:
*********************************************************************/

#pragma once


//==================================================================================================================

namespace FK3DEngine
{
	//--------------------------------------------------------------------------------------------------------------

	//������ʽ�ṹ
	struct SoundFormat
	{
		DWORD	dwChannels;		//����������
		DWORD	dwFrequency;	//����Ƶ��
		DWORD	dwBitRate;		//����������
		DWORD	dwBytesPerSec;	//����ÿ���ֽ���
		DWORD	dwLength;		//���ݳ���
	};

	//--------------------------------------------------------------------------------------------------------------
	//�����ļ�������
	class FK_DLL SoundDecoder
	{
	public:
		FileObject*		mpSoundFile;	//�����ļ�ָ��

		SoundFormat		mSoundFormat;	//������ʽ��Ϣ

		DWORD			mdwReadPos;		//�������ݶ�ȡλ��

	public:
		SoundDecoder();
		virtual ~SoundDecoder() = 0;

		//�������ļ�
		virtual SoundFormat* OpenSoundFile( FileObject* pFile, LPCSTR szFileName ) = 0;

		//�ر������ļ�
		virtual void CloseSoundFile() = 0;

		//����������ȡλ�õ����
		virtual void ResetReadPos() = 0;

		//��ȡ�������ݵ�ָ������
		virtual void ReadSoundData( void* pBuf, DWORD dwLen ) = 0;
	};
	//--------------------------------------------------------------------------------------------------------------
}

//==================================================================================================================