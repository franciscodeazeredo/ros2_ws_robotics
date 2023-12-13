from setuptools import find_packages
from setuptools import setup

setup(
    name='ps4_controller',
    version='0.0.0',
    packages=find_packages(
        include=('ps4_controller', 'ps4_controller.*')),
)
