/*
	Copyright (C) 2010 Andres Cabrera
	mantaraya36@gmail.com

	This file is part of CsoundQt.

	CsoundQt is free software; you can redistribute it
	and/or modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	CsoundQt is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with Csound; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
	02111-1307 USA
*/

#ifndef CSOUNDOPTIONS_H
#define CSOUNDOPTIONS_H

#include <QString>

class ConfigLists;

class CsoundOptions
{
public:
	CsoundOptions(ConfigLists *configlists);

	QString generateCmdLineFlags();
	QStringList generateCmdLineFlagsList();
	int generateCmdLine(char **argv);

	void setJackNameSize(int size);

	QString fileName1;
	QString fileName2;
	bool rt; //FIXME make sure this is set!

	bool enableFLTK;
	int bufferSize;
	bool bufferSizeActive;
	int HwBufferSize;
	bool HwBufferSizeActive;
	bool dither;
	bool newParser;
	bool multicore;
	int numThreads;
	QString additionalFlags;
	bool additionalFlagsActive;

	bool fileUseOptions;
	bool fileOverrideOptions;
	bool fileAskFilename;
	bool filePlayFinished;
	int fileFileType;
	int fileSampleFormat;
	bool fileInputFilenameActive;
	QString fileInputFilename;
	bool fileOutputFilenameActive;
	QString fileOutputFilename;

	int sampleFormat;

	bool rtUseOptions;
	bool rtOverrideOptions;
	QString rtAudioModule;
	QString rtInputDevice;
	QString rtOutputDevice;
	QString rtJackName;
	QString rtMidiModule;
	QString rtMidiInputDevice;
	QString rtMidiOutputDevice;
	bool simultaneousRun; // Allow running various instances (tabs) simultaneously.

	QString csdocdir;
	QString opcodedir;
	bool opcodedirActive;
	QString opcodedir64;
	bool opcodedir64Active;
	QString opcode6dir64;
	bool opcode6dir64Active;
	QString sadir;
	bool sadirActive;
	QString ssdir;
	bool ssdirActive;
	QString sfdir;
	bool sfdirActive;
	QString incdir;
	bool incdirActive;

private:
	int m_jackNameSize;
	ConfigLists *m_configlists;
};

#endif // CSOUNDOPTIONS_H
