#include <stdio.h>
#include "sound.h"

void showID(char *idname,char *id){
	int i;
	printf("%s : ", idname);
	for(i=0; i<4; i++) printf("%c", id[i]);
	puts("");
}
void displayWAVHDR(struct WAVHDR h){
	showID("ChunkID", h.ChunkID);
	printf("Chunk Size: %d\n", h.ChunkSize);
	showID("Format", h.Format);
	showID("Subchunk1ID", h.Subchunk1ID);
	printf("Subchunk1 size: %d\n", h.Subchunk1Size);
	printf("Audio Format: %d\n", h.AudioFormat);
	printf("Num. of Channels: %d\n", h.NumChannels);
	printf("Sample rate: %d\n", h.SampleRate);
	printf("Byte Rate: %d\n", h.ByteRate);
	printf("Block Align: %d\n", h.BlockAlign);
	printf("Bits per sample: %d\n", h.BitsPerSample);
	showID("Subchunk2ID", h.Subchunk2ID);
	printf("Subchunk2 size: %d\n", h.Subchunk2Size);
	// to be continue for other fields
}
