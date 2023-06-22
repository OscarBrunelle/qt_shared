QString Transaction::read_data_from_file(QString file_name) {
	QFile file(file_name);
	QString data = "";
	if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
		data = file.readAll();
	} else {
		qDebug() << "Error: could not read file '" << file_name << "'";
		return NULL;
	}
	return data;
}

void Transaction::write_data_to_file(QString file_name, QString data) {
	QFile file(file_name);
	if (file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text)) {
		QTextStream stream(&file);
		stream << data;
	}
}