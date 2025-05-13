#include "file.hpp"

// Constructor for File

File::File(string name) : name(name) {}

void File::open() {}

void File::close() {}

void File::displayInfo() const {}

FileType File::getType() const {}

string File::getName() const {}


// Image class implementations

Image::Image(const string name, bool transparent) {}

void Image::displayInfo() const {}

bool Image::isTransparent() const {}

void Image::open() {}

void Image::close() {}

FileType Image::getType() const {}


// Video class implementations

Video::Video(const string name, int fps, int length) {}

void Video::displayInfo() const {}

int Video::getFPSCount() const {}

int Video::getlengthCount() const {}

void Video::open() {}

void Video::close() {}

FileType Video::getType() const {}


// Directory class implementations

Directory::Directory(const string name) {}

Directory::~Directory() {}

void Directory::addFile(File* file) {}

void Directory::removeFile(const string& filename) {}

void Directory::displayAll() const {}

string Directory::getName() const {}

File* Directory::searchFile(const string& filename) {}

void Directory::displayFilesByType(FileType type) const {}