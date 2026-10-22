from setuptools import find_packages
from setuptools import setup

setup(
    name='package_messages',
    version='0.0.0',
    packages=find_packages(
        include=('package_messages', 'package_messages.*')),
)
